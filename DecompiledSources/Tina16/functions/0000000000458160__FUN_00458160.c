/* Ghidra address: 00458160 */
/* Ghidra symbol: FUN_00458160 */


undefined8 FUN_00458160(int *param_1)

{
  ushort uVar1;
  int iVar2;
  uint7 uVar4;
  undefined8 uVar3;
  
  iVar2 = *param_1;
  uVar1 = *(ushort *)((longlong)param_1 + 2);
  uVar4 = (uint7)(uint3)((uint)iVar2 >> 8);
  if ((uVar1 < 0x80) || (0x7f7f < uVar1)) {
    if ((uVar1 < 0x8080) || (0xff7f < uVar1)) {
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else if (iVar2 == -0x80000000) {
        uVar3 = 0x80000001;
      }
      else if (uVar1 < 0x80) {
        uVar3 = CONCAT71(uVar4,2);
      }
      else if ((uVar1 < 0x8000) || (0x807f < uVar1)) {
        if (iVar2 == 0x7f800000) {
          uVar3 = 0x7f800006;
        }
        else if (iVar2 == -0x800000) {
          uVar3 = 0xff800007;
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

