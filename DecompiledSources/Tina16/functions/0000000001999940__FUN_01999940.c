/* Ghidra address: 01999940 */
/* Ghidra symbol: FUN_01999940 */


void FUN_01999940(longlong param_1,longlong *param_2)

{
  short sVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_EDI;
  longlong local_40 [2];
  
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x100) + 0x488);
  if (((lVar2 == 0) || (*(char *)(lVar2 + 0xdd8) != '\0')) &&
     (cVar3 = FUN_0198a580(param_2), cVar3 == '\x05')) {
    unaff_EDI = (**(code **)(*param_2 + 0x210))(param_2,0);
    uVar4 = (**(code **)(*param_2 + 0x210))(param_2,1);
    FUN_016aef60(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xd0) + 0x460),
                 unaff_EDI,uVar4);
  }
  cVar3 = FUN_0198a580(param_2);
  if (cVar3 == '\x06') {
    unaff_EDI = (**(code **)(*param_2 + 0x210))(param_2,0);
    uVar4 = (**(code **)(*param_2 + 0x210))(param_2,1);
    FUN_016aef60(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xd0) + 0x460),
                 unaff_EDI,uVar4);
  }
  cVar3 = FUN_0198a580(param_2);
  if ((cVar3 == '\x04') &&
     (cVar3 = FUN_0199f130(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0xd0),param_2,
                           *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0xe0),
                           *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x108)), cVar3 != '\0'))
  {
    iVar5 = (**(code **)(*param_2 + 0x1c8))(param_2);
    cVar3 = FUN_01d04d40(param_2);
    if ((cVar3 != '\0') && (iVar5 == 1)) {
      uVar4 = (**(code **)(*param_2 + 0x210))(param_2,0);
      FUN_016aef60(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xd0) + 0x460),0,
                   uVar4);
    }
    iVar6 = 0;
    iVar7 = unaff_EDI;
    if (-1 < iVar5 + -1) {
      do {
        unaff_EDI = (**(code **)(*param_2 + 0x210))(param_2,iVar6);
        if (0 < iVar6) {
          FUN_016aef60(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xd0) + 0x460),
                       unaff_EDI,iVar7);
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + -1;
        iVar7 = unaff_EDI;
      } while (iVar5 != 0);
    }
    iVar5 = FUN_01cfd2d0();
    iVar7 = 0;
    if (-1 < iVar5 + -1) {
      do {
        cVar3 = (**(code **)(*param_2 + 0x2d0))(param_2,iVar7,local_40);
        if ((cVar3 == '\t') && (-1 < *(short *)(local_40[0] + 0x1f))) {
          sVar1 = *(short *)(local_40[0] + 0x1f);
          FUN_016aef60(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xd0) + 0x460),
                       (int)sVar1,unaff_EDI);
          unaff_EDI = (int)sVar1;
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_01996c40(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0xd0),param_2);
  }
  return;
}

