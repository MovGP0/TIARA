/* Ghidra address: 019a18e0 */
/* Ghidra symbol: FUN_019a18e0 */


undefined8 FUN_019a18e0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  cVar1 = FUN_0198a580(param_2);
  if (cVar1 == '\x04') {
    uVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
    uVar3 = (undefined2)uVar2;
    cVar1 = FUN_01d3ffd0(uVar3);
    uVar4 = uVar2 & 0xffff;
    if (((((((cVar1 == '\0') || (cVar1 = FUN_01d05040(param_2), cVar1 != '\0')) ||
           (cVar1 = FUN_01d3f210(param_2), cVar1 != '\0')) ||
          (((cVar1 = FUN_01d3fee0(param_2,3), cVar1 != '\0' || ((uVar2 & 0xffff) == 0x3a)) ||
           ((uVar4 == 0x96 || ((uVar4 == 0x68 || (uVar4 == 0x86)))))))) ||
         ((uVar4 == 0x91 || (cVar1 = FUN_01d40240(uVar2 & 0xffff), cVar1 != '\0')))) &&
        ((((uVar2 & 0xffff) != 0x3ec && (uVar4 != 0x4b0)) && (uVar4 != 0x2901)))) &&
       ((((uVar4 != 0x2902 && (cVar1 = FUN_01d3d600(uVar3), cVar1 == '\0')) &&
         (((uVar4 != 0x2903 && ((uVar4 != 0x462 && (uVar4 != 0x2900)))) && (uVar4 != 0x45f)))) &&
        ((((cVar1 = FUN_01d3d530(uVar3), cVar1 == '\0' &&
           (cVar1 = FUN_01d3d590(uVar3), cVar1 == '\0')) || (*PTR_DAT_020052b8 == '\0')) &&
         (uVar4 != 0x3ee)))))) {
      uVar5 = 0;
    }
    else {
      uVar5 = CONCAT71((uint7)(byte)(uVar2 >> 8),1);
    }
  }
  return uVar5;
}

