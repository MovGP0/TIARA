/* Ghidra address: 004daf90 */
/* Ghidra symbol: FUN_004daf90 */


void FUN_004daf90(longlong param_1,undefined4 *param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *local_30 [2];
  
  local_30[0] = (longlong *)0x0;
  if (-1 < param_3) {
    param_3 = param_3 + 1;
    do {
      uVar1 = *param_2;
      uVar4 = FUN_0041b800(local_30);
      cVar2 = FUN_004e3210(*(undefined8 *)(param_1 + 8),uVar1,uVar4);
      if (cVar2 != '\0') {
        (**(code **)(*local_30[0] + 0x88))(local_30[0],param_4);
        iVar3 = (**(code **)(*local_30[0] + 0x28))(local_30[0]);
        if (iVar3 == 0) {
          FUN_004e2fb0(*(undefined8 *)(param_1 + 8),uVar1);
          FUN_0041b800(local_30);
        }
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_0041b800(local_30);
  return;
}

