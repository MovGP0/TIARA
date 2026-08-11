/* Ghidra address: 01c75560 */
/* Ghidra symbol: FUN_01c75560 */


void FUN_01c75560(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_30[0] = 0;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x18f0) + 0xa8))(*(longlong **)(param_1 + 0x18f0));
  if (cVar2 != '\0') {
    iVar3 = FUN_00724300(*(undefined8 *)(param_1 + 0x18f0));
    if (iVar3 == 3) {
      FUN_01c806a0(param_1,param_2);
      FUN_00724270(*(undefined8 *)(param_1 + 0x18f0),local_30);
      FUN_01530bb0(*(undefined8 *)PTR_DAT_020023c0,local_30[0]);
    }
    else {
      plVar4 = (longlong *)FUN_007241d0(*(undefined8 *)(param_1 + 0x18f0));
      iVar3 = (**(code **)(*plVar4 + 0x28))();
      iVar5 = 0;
      if (-1 < iVar3 + -1) {
        do {
          plVar4 = (longlong *)FUN_007241d0(*(undefined8 *)(param_1 + 0x18f0));
          (**(code **)(*plVar4 + 0x18))(plVar4,&local_38,iVar5);
          FUN_01c681b0(param_1,local_38,0,0,0,0,1);
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    uVar1 = *(undefined8 *)(param_1 + 0x18f0);
    plVar4 = (longlong *)FUN_007241d0(uVar1);
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_48,0);
    FUN_00441640(&local_40,local_48);
    FUN_0177d560(uVar1,local_40);
    FUN_00724380(*(undefined8 *)(param_1 + 0x18f0),0);
  }
  FUN_00414560(&local_48,3);
  FUN_00414480(local_30);
  return;
}

