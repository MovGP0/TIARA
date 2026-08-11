/* Ghidra address: 01d08b60 */
/* Ghidra symbol: FUN_01d08b60 */


void FUN_01d08b60(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    iVar3 = 0;
    iVar4 = *(int *)(*(longlong *)(param_2 + 0x470) + 0x10);
    if (-1 < iVar4 + -1) {
      do {
        plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_2 + 0x470),iVar3);
        if (param_1 == *plVar1) {
          uVar2 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x470),iVar3);
          uVar2 = FUN_01d0f4c0(uVar2);
          FUN_004ae7e0(param_3,uVar2);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = *(int *)(*(longlong *)(param_2 + 0x468) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_2 + 0x468),iVar3);
        if (param_1 == *plVar1) {
          uVar2 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x468),iVar3);
          uVar2 = FUN_01d0f530(uVar2);
          FUN_004ae7e0(param_4,uVar2);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

