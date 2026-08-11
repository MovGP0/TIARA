/* Ghidra address: 0105a7a0 */
/* Ghidra symbol: FUN_0105a7a0 */


void FUN_0105a7a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_00416db0(local_res10[0],L"Arduino MKR1000");
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x68) = 1;
  }
  else {
    iVar1 = FUN_00416db0(local_res10[0],L"Arduino Nano Every");
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x68) = 2;
    }
    else {
      iVar1 = FUN_00416db0(local_res10[0],L"BBC micro:bit");
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x68) = 3;
      }
      else {
        iVar1 = FUN_00416db0(local_res10[0],L"ESP32S3 Dev Module");
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x68) = 5;
        }
        else {
          *(undefined4 *)(param_1 + 0x68) = 0;
        }
      }
    }
  }
  if ((*(int *)(param_1 + 0x68) == 1) || (*(int *)(param_1 + 0x68) == 3)) {
    FUN_00414ad0(param_1 + 0x80,L"arm-none-eabi-");
    FUN_00414ad0(param_1 + 0x60,L"arm-none-eabi-gcc.exe");
  }
  FUN_00414480(local_res10);
  return;
}

