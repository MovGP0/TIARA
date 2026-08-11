/* Ghidra address: 00706030 */
/* Ghidra symbol: FUN_00706030 */


void FUN_00706030(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_20 [2];
  
  local_20[0] = 0;
  if ((char)param_1[0xb0] == '\x01') {
    iVar1 = FUN_00705970(param_1);
    *(longlong *)(param_2 + 0x18) = (longlong)iVar1;
  }
  else if ((char)param_1[0xb0] == '\x02') {
    *(undefined8 *)(param_2 + 0x18) = 0;
    iVar1 = (**(code **)(*param_1 + 0x260))(param_1);
    if (iVar1 != -1) {
      uVar2 = (**(code **)(*param_1 + 0x260))(param_1);
      (**(code **)(*(longlong *)param_1[0x9e] + 0x18))((longlong *)param_1[0x9e],local_20,uVar2);
      iVar1 = 0;
      if (local_20[0] != 0) {
        iVar1 = *(int *)(local_20[0] + -4);
      }
      *(longlong *)(param_2 + 0x18) = (longlong)iVar1;
    }
  }
  else {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  FUN_00414480(local_20);
  return;
}

