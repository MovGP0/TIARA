/* Ghidra address: 006e53f0 */
/* Ghidra symbol: FUN_006e53f0 */


void FUN_006e53f0(longlong param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if ((char)param_2 == '\0') {
    if (*(char *)(param_1 + 0x581) == '\0') {
      uVar1 = FUN_006e2230(param_1,param_4,param_5);
      if ((uVar1 & 8) == 0) {
        FUN_006e5a00(param_1);
      }
      else {
        uVar2 = FUN_006e2530(param_1);
        FUN_006e50b0(param_1,uVar2,param_3);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x581) = 0;
    }
  }
  FUN_00650920(param_1,param_2,param_3,param_4,param_5);
  return;
}

