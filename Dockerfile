FROM ubuntu:latest
COPY ./exercice1.cxx /exercice1.cxx
RUN apt-get update && apt-get install -y g++
RUN g++ /exercice1.cxx -o /exercice1
CMD ["/exercice1"]

