/* Ghidra address: 01cc7e10 */
/* Ghidra symbol: FUN_01cc7e10 */


ulonglong FUN_01cc7e10(longlong param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  int iVar1;
  undefined8 unaff_R13;
  undefined7 uVar3;
  ulonglong uVar2;
  bool bVar4;
  
  uVar3 = (undefined7)((ulonglong)unaff_R13 >> 8);
  if (param_4 == '\0') {
    iVar1 = *(int *)(param_1 + 0x24);
    bVar4 = iVar1 != *(int *)(param_1 + 0x28);
    uVar2 = CONCAT71(uVar3,bVar4);
    if (bVar4) {
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x4474) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                  (*(longlong **)(param_1 + 0x18),param_2,8);
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
                  (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x30),1);
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                  (*(longlong **)(param_1 + 0x18),param_3,8);
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
                  (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x34),1);
      }
      else {
        *param_2 = *(undefined8 *)(**(longlong **)(param_1 + 0x70) + (longlong)iVar1 * 8);
        *param_3 = *(undefined8 *)(**(longlong **)(param_1 + 0x78) + (longlong)iVar1 * 8);
      }
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24);
    uVar2 = CONCAT71(uVar3,0 < iVar1);
    if (0 < iVar1) {
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x4474) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
                  (*(longlong **)(param_1 + 0x18),-*(int *)(param_1 + 0x2c),1);
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                  (*(longlong **)(param_1 + 0x18),param_2,8);
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
                  (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x30),1);
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                  (*(longlong **)(param_1 + 0x18),param_3,8);
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
                  (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x34),1);
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
                  (*(longlong **)(param_1 + 0x18),-*(int *)(param_1 + 0x2c),1);
      }
      else {
        *param_2 = *(undefined8 *)(**(longlong **)(param_1 + 0x70) + (longlong)(iVar1 + -1) * 8);
        *param_3 = *(undefined8 *)(**(longlong **)(param_1 + 0x78) + (longlong)(iVar1 + -1) * 8);
      }
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    }
  }
  return uVar2 & 0xffffffff;
}

