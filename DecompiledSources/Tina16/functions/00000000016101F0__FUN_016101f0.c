/* Ghidra address: 016101f0 */
/* Ghidra symbol: FUN_016101f0 */


undefined8 FUN_016101f0(longlong param_1,uint param_2,undefined8 *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0;
  iVar6 = *(int *)(param_1 + 0x280);
  if (-1 < iVar6 + -1) {
    do {
      uVar1 = FUN_01610100(param_1 + 0x288,param_1 + 0x284);
      if (param_2 == (uVar1 & 0xff)) {
        uVar4 = *(undefined8 *)(param_1 + 0x288);
        uVar3 = *(undefined4 *)(param_1 + 0x284);
        uVar5 = 1;
      }
      uVar2 = FUN_0160f890(*(undefined4 *)(param_1 + 0x200 + (longlong)(int)(uVar1 & 0xff) * 4));
      FUN_016101d0(param_1 + 0x288,param_1 + 0x284,uVar2);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *param_3 = *(undefined8 *)(param_1 + 0x288);
  *param_4 = *(undefined4 *)(param_1 + 0x284);
  *(undefined8 *)(param_1 + 0x288) = uVar4;
  *(undefined4 *)(param_1 + 0x284) = uVar3;
  return uVar5;
}

