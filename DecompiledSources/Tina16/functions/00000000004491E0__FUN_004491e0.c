/* Ghidra address: 004491e0 */
/* Ghidra symbol: FUN_004491e0 */


longlong * FUN_004491e0(longlong param_1,longlong *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_240;
  undefined1 auStack_232 [514];
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2a;
  undefined8 local_20 [2];
  
  local_240 = 0;
  local_20[0] = 0;
  FUN_00414480(param_2);
  local_30 = *(undefined2 *)(param_1 + 0x4e);
  local_2e = *(undefined2 *)(param_1 + 0x4c);
  local_2a = *(undefined2 *)(param_1 + 0x4a);
  FUN_00414b50(local_20,&LAB_004493c4);
  uVar1 = thunk_FUN_04195d02();
  uVar3 = FUN_00416740(local_20[0]);
  iVar2 = thunk_FUN_0412b8ab(uVar1,4,&local_30,uVar3,auStack_232 + 2,0x200);
  if (iVar2 != 0) {
    FUN_00416830(param_2,auStack_232 + 2,0x100);
    if (param_3 == 1) {
      if (DAT_0200c444 == 4) {
        if (DAT_0200c448 == 1) {
          uVar1 = 0;
          if (*param_2 != 0) {
            uVar1 = *(undefined4 *)(*param_2 + -4);
          }
          iVar2 = FUN_0044f420(*param_2,uVar1);
          if (iVar2 == 4) {
            iVar2 = FUN_0044f560(*param_2,3);
            FUN_004167d0(&local_240,auStack_232 + (longlong)iVar2 * 2);
            uVar1 = FUN_0044f610(local_240,2);
            FUN_00414740(param_2,auStack_232 + (longlong)iVar2 * 2,uVar1);
          }
        }
      }
      else if (DAT_0200c444 == 0x11) {
        uVar1 = FUN_0044f610(*param_2,1);
        FUN_00416dc0(param_2,*param_2,1,uVar1);
      }
    }
  }
  FUN_00414480(&local_240);
  FUN_00414480(local_20);
  return param_2;
}

