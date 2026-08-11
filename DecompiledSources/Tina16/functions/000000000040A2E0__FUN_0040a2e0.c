/* Ghidra address: 0040a2e0 */
/* Ghidra symbol: FUN_0040a2e0 */


undefined8 FUN_0040a2e0(longlong *param_1)

{
  ushort uVar1;
  longlong lVar2;
  undefined7 uVar4;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar1 = *(ushort *)((longlong)param_1 + 6);
  uVar4 = (undefined7)((ulonglong)lVar2 >> 8);
  if ((uVar1 < 0x10) || (0x7fef < uVar1)) {
    if ((uVar1 < 0x8010) || (0xffef < uVar1)) {
      if (lVar2 == 0) {
        uVar3 = 0;
      }
      else if (lVar2 == -0x8000000000000000) {
        uVar3 = 0x8000000000000001;
      }
      else if (uVar1 < 0x10) {
        uVar3 = CONCAT71(uVar4,2);
      }
      else if ((uVar1 < 0x8000) || (0x800f < uVar1)) {
        if (lVar2 == 0x7ff0000000000000) {
          uVar3 = 0x7ff0000000000006;
        }
        else if (lVar2 == -0x10000000000000) {
          uVar3 = 0xfff0000000000007;
        }
        else {
          uVar3 = CONCAT71(uVar4,8);
        }
      }
      else {
        uVar3 = CONCAT71(uVar4,3);
      }
    }
    else {
      uVar3 = CONCAT71(uVar4,5);
    }
  }
  else {
    uVar3 = CONCAT71(uVar4,4);
  }
  return uVar3;
}

