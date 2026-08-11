/* Ghidra address: 01998920 */
/* Ghidra symbol: FUN_01998920 */


undefined4 FUN_01998920(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  longlong local_res10;
  undefined8 local_res18;
  undefined4 local_3c;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  local_3c = 0xfffffffe;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x5c);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x5c) +
          *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x58) + -1;
  if (iVar4 <= iVar5) {
    iVar5 = (iVar5 - iVar4) + 1;
    do {
      plVar2 = (longlong *)
               FUN_00b94e60(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0xd0),iVar4);
      (**(code **)(*plVar2 + 0x288))(plVar2,local_30);
      if (local_30[0] == local_res10) {
        bVar6 = true;
      }
      else if ((local_30[0] == 0) || (local_res10 == 0)) {
        bVar6 = false;
      }
      else {
        iVar1 = FUN_0043e420(local_30[0],local_res10);
        bVar6 = iVar1 == 0;
      }
      if (bVar6) {
        uVar3 = FUN_00b94e60(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0xd0),iVar4);
        FUN_017ff570(uVar3,&local_38);
        iVar1 = FUN_00416db0(local_38,local_res18);
        if (iVar1 == 0) {
          plVar2 = (longlong *)
                   FUN_00b94e60(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0xd0),iVar4);
          local_3c = (**(code **)(*plVar2 + 0x210))(plVar2,0);
          break;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414560(&local_38,2);
  FUN_00414560(&local_res10,2);
  return local_3c;
}

