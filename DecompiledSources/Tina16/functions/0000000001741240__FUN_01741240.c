/* Ghidra address: 01741240 */
/* Ghidra symbol: FUN_01741240 */


void FUN_01741240(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *local_40 [5];
  
  FUN_0173d870(param_1,param_2);
  plVar3 = *(longlong **)(param_1 + 0x28);
  (**(code **)(*plVar3 + 0x2d0))(plVar3,1,local_40);
  uVar1 = *local_40[0];
  (**(code **)(*plVar3 + 0x2d0))(plVar3,2,local_40);
  uVar2 = *local_40[0];
  lVar4 = plVar3[0x2d];
  if (lVar4 != 0) {
    (**(code **)(**(longlong **)(lVar4 + 0xbe) + 0x2d0))(*(longlong **)(lVar4 + 0xbe),1,local_40);
    lVar5 = FUN_01d3aab0(local_40[0][1],0);
    *(char *)(lVar5 + 8) = '\x01' - (char)param_2;
    (**(code **)(**(longlong **)(lVar4 + 0xbe) + 0x2d0))(*(longlong **)(lVar4 + 0xbe),2,local_40);
    if ((char)param_2 == '\0') {
      *local_40[0] = uVar1;
    }
    else {
      *local_40[0] = uVar2;
    }
  }
  return;
}

