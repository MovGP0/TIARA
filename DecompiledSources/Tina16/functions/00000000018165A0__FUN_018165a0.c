/* Ghidra address: 018165a0 */
/* Ghidra symbol: FUN_018165a0 */


void FUN_018165a0(undefined8 param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 local_30 [2];
  short *local_20;
  
  local_30[0] = 0;
  local_20 = (short *)0x0;
  if (param_3 != '\0') {
    (**(code **)(*param_2 + 0x90))(param_2);
  }
  iVar1 = FUN_004b2060();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_018163e0(param_1,iVar3);
      FUN_00414b50(&local_20,*(undefined8 *)(lVar2 + 0x20));
      if ((local_20 != (short *)0x0) && (*local_20 == 0x20)) {
        FUN_00416dc0(local_30,local_20,2,0xff);
        (**(code **)(*param_2 + 0x78))(param_2,local_30[0]);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return;
}

