class PID {
  private:
    float G = 0;
    float Kp, Kd, Ki = 0;
    float speedCmd = 0;

    float posErrorPrev = 0;
    float posIntegrator = 0;

    float error = 0;
    float errorPrev = 0;
    float integrator = 0;

  public:
    void SetPIDCoef(float _G, float _Kp, float _Kd, float _Ki);
    void Reset();
    int GetPIDOutput( float _cmd, float _pos, float _loopTime );
};
