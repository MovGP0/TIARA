/* Ghidra address: 01993c90 */
/* Ghidra symbol: FUN_01993c90 */


undefined8 FUN_01993c90(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((param_2 != (longlong *)0x0) && ((undefined **)*param_2 == &PTR_FUN_017c0190)) {
    cVar1 = FUN_017c25f0(param_2);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0x1f0))(param_2,0,param_1 + 0x3c,param_1 + 0x38);
      (**(code **)(*param_2 + 0x1f0))(param_2,1,param_1 + 0x34,param_1 + 0x30);
      iVar2 = FUN_01cefe00(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x38),
                           *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
      uVar3 = 0;
      if (iVar2 < 1) {
        iVar2 = FUN_01cefe00(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90),
                             *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x30));
        if (iVar2 < 1) {
          uVar3 = FUN_017c06d0(param_2);
          *(undefined8 *)(param_1 + 0x28) = uVar3;
          uVar3 = 1;
        }
      }
    }
  }
  return uVar3;
}

