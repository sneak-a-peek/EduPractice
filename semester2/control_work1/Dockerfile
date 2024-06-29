FROM alpine as build-env
RUN apk add --no-cache build-base
WORKDIR /app
COPY . .
# Compile the binaries
RUN gcc -o control_work1 control_work1.c
FROM alpine
COPY --from=build-env /app/control_work1 /app/control_work1
WORKDIR /app
CMD ["/app/control_work1"] 