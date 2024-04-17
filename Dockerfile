FROM ubuntu:latest
COPY ./exercice2.cxx /exercice2.cxx
RUN apt-get update && apt-get install -y g++
RUN g++ /exercice2.cxx -o /exercice2
CMD ["/exercice2"]

