FROM ubuntu:22.04

RUN apt update && apt install -y \
    build-essential cmake git \
    python3 python3-pip \
    librdkafka-dev

WORKDIR /app

COPY . .

RUN mkdir build && cd build && cmake .. && make -j

CMD ["./build/core/runtime"]
