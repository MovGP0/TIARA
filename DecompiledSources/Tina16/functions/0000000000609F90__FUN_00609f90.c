/* Ghidra address: 00609f90 */
/* Ghidra symbol: FUN_00609f90 */


ulonglong FUN_00609f90(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  undefined7 uVar5;
  
  uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar4 = CONCAT71(uVar5,8);
  cVar3 = FUN_00609ee0(param_1);
  if (cVar3 == '\x01') {
    uVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x60);
    uVar1 = *(ushort *)(lVar2 + 0x6e);
    if (uVar1 < 0x11) {
      if (uVar1 == 0x10) {
        if (*(int *)(lVar2 + 0x70) == 0) {
          uVar4 = CONCAT71(uVar5,4);
        }
        else if ((*(int *)(lVar2 + 0x70) == 3) && (*(int *)(lVar2 + 0x8c) == 0x7e0)) {
          uVar4 = CONCAT71(uVar5,5);
        }
      }
      else if (uVar1 == 1) {
        uVar4 = CONCAT71(uVar5,1);
      }
      else if (uVar1 == 4) {
        uVar4 = CONCAT71(uVar5,2);
      }
      else if (uVar1 == 8) {
        uVar4 = CONCAT71(uVar5,3);
      }
    }
    else if (uVar1 == 0x18) {
      uVar4 = CONCAT71(uVar5,6);
    }
    else if ((uVar1 == 0x20) && (*(int *)(lVar2 + 0x70) == 0)) {
      uVar4 = CONCAT71(uVar5,7);
    }
  }
  return uVar4 & 0xffffffff;
}

