/* Ghidra address: 01997a20 */
/* Ghidra symbol: FUN_01997a20 */


void FUN_01997a20(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  bool bVar6;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40 [2];
  
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40[0] = 0;
  cVar2 = FUN_0198a580(param_2);
  if (cVar2 == '\x03') {
    for (iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x30) + 0x5c);
        iVar5 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x30) + 0x5c) +
                *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x30) + 0x58);
        iVar5 = iVar5 + 1) {
      plVar4 = (longlong *)
               FUN_0198d420(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x30) + 0xd0),iVar5);
      (**(code **)(*plVar4 + 0x288))(plVar4,local_40);
      lVar1 = local_40[0];
      (**(code **)(*param_2 + 0x288))(param_2,&local_48);
      if (lVar1 == local_48) {
        bVar6 = true;
      }
      else if ((lVar1 == 0) || (local_48 == 0)) {
        bVar6 = false;
      }
      else {
        iVar3 = FUN_0043e420(lVar1,local_48);
        bVar6 = iVar3 == 0;
      }
      if (bVar6) {
        FUN_017ff570(plVar4,&local_50);
        FUN_017ff570(param_2,&local_58);
        iVar3 = FUN_00416db0(local_50,local_58);
        if (iVar3 == 0) {
          iVar3 = (**(code **)(*plVar4 + 0x210))(plVar4,0);
          if (iVar3 == -1) {
            FUN_01997bc0(*(undefined8 *)(param_1 + 0x110),iVar5,0);
          }
        }
      }
    }
  }
  FUN_00414560(&local_58,4);
  return;
}

