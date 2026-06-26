class VisionAgent(BaseAgent):

    def on_event(self, event):
        if event["type"] == "FRAME":
            risk = event["payload"].get("risk", 0)

            if risk > 0.8:
                self.emit({
                    "type": "SCADA_STOP",
                    "payload": {"reason": "high risk"}
                })
