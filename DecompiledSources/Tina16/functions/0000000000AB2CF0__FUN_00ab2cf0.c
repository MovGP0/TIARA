/* Ghidra address: 00ab2cf0 */
/* Ghidra symbol: FUN_00ab2cf0 */


undefined8
FUN_00ab2cf0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int local_2c;
  
  if (((0 < *(int *)(param_1 + 0x6c)) && (*(int *)(param_1 + 0x68) <= param_3)) &&
     (param_3 < *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x6c))) {
    iVar2 = 0;
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x168) + 0x10);
    if (-1 < iVar6 + -1) {
      do {
        lVar3 = FUN_00ac4a60(*(undefined8 *)(param_1 + 0x168),iVar2);
        iVar7 = *(int *)(lVar3 + 0x10);
        local_2c = 0;
        if (-1 < iVar7 + -1) {
          do {
            uVar4 = FUN_004aeac0(lVar3,local_2c);
            cVar1 = FUN_004113d0(uVar4,&PTR_FUN_00a8c408);
            if (cVar1 != '\0') {
              lVar5 = FUN_004aeac0(lVar3,local_2c);
              uVar4 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x20))
                                (*(longlong **)(lVar5 + 0x80),param_2,param_3,param_4,param_5);
              if ((char)uVar4 != '\0') {
                return uVar4;
              }
            }
            local_2c = local_2c + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        iVar2 = iVar2 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return 0;
}

