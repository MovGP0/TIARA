/* Ghidra address: 019a49c0 */
/* Ghidra symbol: FUN_019a49c0 */


void FUN_019a49c0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 local_40;
  undefined4 local_3c [3];
  
  if ((param_2 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*param_2 + 0x118))(param_2), cVar1 != '\0')) {
    iVar2 = (**(code **)(*param_2 + 0x1c8))(param_2);
    iVar3 = 0;
    iVar8 = iVar2;
    if (-1 < iVar2 + -1) {
      do {
        cVar1 = (**(code **)(*param_2 + 0x1d8))(param_2,iVar3);
        if (cVar1 == '\0') {
          cVar1 = (**(code **)(*param_2 + 600))(param_2,iVar3);
          if (cVar1 != '\0') {
            return;
          }
          (**(code **)(*param_2 + 0x1f0))(param_2,iVar3,local_3c,&local_40);
          cVar1 = FUN_0198a580(param_2);
          if (cVar1 == '\x05') {
            uVar4 = FUN_00b92120(local_3c[0],local_40);
            uVar7 = FUN_00b95a80(uVar4);
            iVar5 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x38),uVar7);
            if (iVar5 == -1) {
              uVar4 = FUN_00b92120(local_3c[0],local_40);
              uVar7 = FUN_00b95a80(uVar4);
              FUN_004ae7e0(*(undefined8 *)(param_1 + 0x38),uVar7);
            }
          }
          else {
            uVar7 = *(undefined8 *)(param_1 + 0x38);
            uVar4 = FUN_00b92120(local_3c[0],local_40);
            uVar6 = FUN_00b95a80(uVar4);
            FUN_004aee50(uVar7,uVar6,0);
          }
        }
        iVar3 = iVar3 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = (**(code **)(*param_2 + 0x1d0))();
    iVar3 = 0;
    if (-1 < iVar8 + -1) {
      do {
        cVar1 = (**(code **)(*param_2 + 0x1d8))(param_2,iVar2 + iVar3);
        if (cVar1 == '\0') {
          (**(code **)(*param_2 + 0x1f0))(param_2,iVar2 + iVar3,local_3c,&local_40);
          uVar7 = *(undefined8 *)(param_1 + 0x38);
          uVar4 = FUN_00b92120(local_3c[0],local_40);
          uVar6 = FUN_00b95a80(uVar4);
          FUN_004aee50(uVar7,uVar6,0);
        }
        iVar3 = iVar3 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}

