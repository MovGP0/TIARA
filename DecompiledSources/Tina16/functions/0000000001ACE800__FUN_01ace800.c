/* Ghidra address: 01ace800 */
/* Ghidra symbol: FUN_01ace800 */


undefined8 FUN_01ace800(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  
  cVar1 = FUN_01d2dd00(param_1 + 0x14,param_2,param_3);
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
    iVar6 = 1;
    if (0 < iVar2) {
      do {
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                          (*(longlong **)(param_1 + 0xd8),iVar6 + -1);
        plVar5 = (longlong *)FUN_004113f0(uVar4,&DAT_01cdd500);
        iVar3 = (**(code **)(*(longlong *)plVar5[0x10] + 0x28))((longlong *)plVar5[0x10]);
        if (0 < iVar3) {
          do {
            cVar1 = (**(code **)(*plVar5 + 0x150))(plVar5,param_2,param_3);
            if (cVar1 != '\0') {
              return 1;
            }
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return 0;
}

