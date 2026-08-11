/* Ghidra address: 00a39360 */
/* Ghidra symbol: FUN_00a39360 */


undefined4 FUN_00a39360(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  double dVar7;
  
  uVar3 = FUN_00a34430(param_1,param_2,param_3);
  if ((char)uVar3 != '\0') {
    uVar4 = FUN_00a392b0(param_1);
    if (uVar4 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x18);
      iVar6 = 0;
      do {
        dVar7 = (double)FUN_00a392e0((double)iVar6 / 255.0,1.0 / (((double)uVar4 / 100000.0) * 2.2))
        ;
        uVar2 = FUN_0040c770(dVar7 * 255.0);
        *(undefined1 *)(lVar1 + 0x169 + (longlong)iVar6) = uVar2;
        dVar7 = (double)FUN_00a392e0((double)iVar6 / 255.0,1.0 / (((double)uVar4 / 100000.0) * 2.2))
        ;
        lVar5 = FUN_0040c770(dVar7 * 255.0);
        *(char *)(lVar1 + 0x48 + lVar5) = (char)iVar6;
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0x100);
    }
  }
  return uVar3;
}

