/* Ghidra address: 019af840 */
/* Ghidra symbol: FUN_019af840 */


undefined4 FUN_019af840(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 local_38 [24];
  
  uVar3 = 0;
  if ((param_2 != (longlong *)0x0) && (param_2 != *(longlong **)(param_1 + 0x68))) {
    cVar1 = (**(code **)(*param_2 + 0xc0))(param_2);
    if (cVar1 == '\0') {
      uVar4 = FUN_0198a580(param_2);
      if ((byte)uVar4 < 8) {
        bVar5 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 0x1eU) !=
                0;
      }
      else {
        bVar5 = false;
      }
      uVar3 = 0;
      if (bVar5) {
        sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
        if (sVar2 == *(short *)(param_1 + 0x2e)) {
          (**(code **)(*param_2 + 0x68))
                    (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x210),local_38);
          uVar3 = FUN_00b95810(param_1 + 0x30,local_38);
        }
      }
    }
  }
  return uVar3;
}

