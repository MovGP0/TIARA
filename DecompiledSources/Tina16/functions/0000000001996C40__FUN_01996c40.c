/* Ghidra address: 01996c40 */
/* Ghidra symbol: FUN_01996c40 */


void FUN_01996c40(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  short *local_38;
  longlong local_30 [2];
  
  uVar3 = (**(code **)(*param_2 + 0xf8))(param_2);
  cVar1 = FUN_01d3d620(uVar3);
  if (cVar1 != '\0') {
    iVar4 = FUN_01cfd2d0(param_2);
    cVar1 = (**(code **)(*param_2 + 0x2d0))(param_2,iVar4 + -3,local_30);
    if ((cVar1 == '\t') && (*(short *)(local_30[0] + 0x1f) == -1)) {
      uVar3 = (**(code **)(*param_2 + 0x210))(param_2,0);
      FUN_016aef60(*(undefined8 *)(param_1 + 0x460),uVar3,0);
    }
  }
  uVar3 = (**(code **)(*param_2 + 0xf8))(param_2);
  cVar1 = FUN_01d3d600(uVar3);
  if (cVar1 == '\0') {
    sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
    if (sVar2 != 0x4b0) {
      sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
      if (sVar2 != 0x4b1) {
        sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
        if (sVar2 != 0x45f) {
          sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
          if (sVar2 != 0x2902) {
            sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
            if (sVar2 != 0x2901) {
              sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
              if (sVar2 != 0x2900) {
                sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
                if (sVar2 != 3000) {
                  sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
                  if (sVar2 != 0xa2) goto LAB_01996dbb;
                }
              }
            }
          }
        }
      }
    }
  }
  iVar4 = FUN_01cfd2d0(param_2);
  cVar1 = (**(code **)(*param_2 + 0x2d0))(param_2,iVar4 + -1,local_30);
  if ((cVar1 == '\t') && (*(short *)(local_30[0] + 0x1f) == -1)) {
    uVar3 = (**(code **)(*param_2 + 0x210))(param_2,0);
    FUN_016aef60(*(undefined8 *)(param_1 + 0x460),uVar3,0);
  }
LAB_01996dbb:
  sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  if (sVar2 == 0x40b) {
    cVar1 = (**(code **)(*param_2 + 0x2d0))(param_2,6,local_30);
    if ((cVar1 == '\t') && (*(short *)(local_30[0] + 0x1f) == -1)) {
      uVar3 = (**(code **)(*param_2 + 0x210))(param_2,0);
      (**(code **)(*param_2 + 0x2d0))(param_2,0xb,&local_38);
      if (0 < *local_38) {
        FUN_016aef60(*(undefined8 *)(param_1 + 0x460),uVar3,0);
      }
    }
  }
  sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  if (sVar2 == 0x40a) {
    cVar1 = (**(code **)(*param_2 + 0x2d0))(param_2,5,local_30);
    if ((cVar1 == '\t') && (*(short *)(local_30[0] + 0x1f) == -1)) {
      uVar3 = (**(code **)(*param_2 + 0x210))(param_2,0);
      (**(code **)(*param_2 + 0x2d0))(param_2,9,&local_38);
      if (0 < *local_38) {
        FUN_016aef60(*(undefined8 *)(param_1 + 0x460),uVar3,0);
      }
    }
  }
  sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  if (sVar2 == 0x2903) {
    uVar3 = (**(code **)(*param_2 + 0x210))(param_2,0);
    FUN_016aef60(*(undefined8 *)(param_1 + 0x460),uVar3,0);
  }
  return;
}

