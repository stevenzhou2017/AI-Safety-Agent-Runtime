class BaseAgent:
    def __init__(self, runtime):
        self.runtime = runtime

    def emit(self, event):
        self.runtime.publish(event)
