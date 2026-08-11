/* Ghidra address: 0040a5e0 */
/* Ghidra symbol: FUN_0040a5e0 */


undefined8 FUN_0040a5e0(longlong *param_1)

{
  ushort uVar1;
  longlong lVar2;
  undefined7 uVar4;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar1 = *(ushort *)(param_1 + 1);
  uVar4 = (undefined7)((ulonglong)lVar2 >> 8);
  if ((uVar1 == 0) || (0x7ffe < uVar1)) {
    if ((uVar1 < 0x8001) || (uVar1 == 0xffff)) {
      if ((lVar2 == 0) && (uVar1 == 0)) {
        uVar3 = 0;
      }
      else if ((lVar2 == 0) && (uVar1 == 0x8000)) {
        uVar3 = 1;
      }
      else if (uVar1 == 0) {
        uVar3 = CONCAT71(uVar4,2);
      }
      else if (uVar1 == 0x8000) {
        uVar3 = CONCAT71(uVar4,3);
      }
      else if ((lVar2 == -0x8000000000000000) && (uVar1 == 0x7fff)) {
        uVar3 = 0x8000000000000006;
      }
      else if ((lVar2 == -0x8000000000000000) && (uVar1 == 0xffff)) {
        uVar3 = 0x8000000000000007;
      }
      else {
        uVar3 = CONCAT71(uVar4,8);
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

