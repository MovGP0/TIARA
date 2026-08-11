/* Ghidra address: 00716180 */
/* Ghidra symbol: FUN_00716180 */


undefined1 FUN_00716180(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [36];
  int local_54;
  undefined1 *local_50;
  longlong local_40;
  longlong *local_30;
  uint local_28;
  undefined1 local_22;
  undefined1 local_21;
  longlong *local_20 [2];
  
  local_50 = auStack_78;
  local_30 = (longlong *)0x0;
  local_20[0] = (longlong *)0x0;
  local_22 = 0;
  local_21 = 0;
  puVar1 = auStack_78;
  if (param_3 != 0) {
    FUN_00414ad0(param_1 + 0x40,param_3);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  local_54 = iVar3 + -1;
  local_28 = 0;
  if (-1 < local_54) {
    do {
      local_54 = iVar3;
      local_40 = *(longlong *)(param_1 + 0x20);
      if (*(uint *)(local_40 + 0x10) <= local_28) {
        FUN_00594f90();
      }
      FUN_0041b840(&local_30,
                   *(undefined8 *)
                    (*(longlong *)(*(longlong *)(local_40 + 8) + (longlong)(int)local_28 * 8) + 8));
      uVar4 = FUN_0041b800(local_20);
      cVar2 = FUN_00452340(local_30,&LAB_00716378,uVar4);
      if (cVar2 != '\0') {
        local_21 = (**(code **)(*local_20[0] + 0x80))(local_20[0]);
        (**(code **)(*local_20[0] + 0x88))(local_20[0],0);
      }
      iVar3 = (**(code **)(*local_30 + 0x20))(local_30,param_2);
      if (0 < iVar3) {
        local_22 = 1;
        FUN_00716320(0,local_50);
        break;
      }
      if (local_20[0] != (longlong *)0x0) {
        (**(code **)(*local_20[0] + 0x88))(local_20[0],local_21);
      }
      local_28 = local_28 + 1;
      local_54 = local_54 + -1;
      iVar3 = local_54;
    } while (local_54 != 0);
  }
  FUN_0041b800(&local_30);
  FUN_0041b800(local_20);
  return local_22;
}

