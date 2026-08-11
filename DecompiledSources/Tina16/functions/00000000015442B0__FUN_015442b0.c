/* Ghidra address: 015442b0 */
/* Ghidra symbol: FUN_015442b0 */


void FUN_015442b0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar8;
  int local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38;
  undefined8 local_30;
  undefined4 uVar7;
  undefined4 uVar9;
  
  local_30 = 0;
  FUN_01d03160(param_2);
  iVar2 = FUN_01542ac0(param_2);
  iVar3 = (**(code **)(*param_2 + 0x1c8))();
  local_4c = 0;
  if (-1 < iVar3 + -1) {
    do {
      iVar4 = (**(code **)(*param_2 + 0x210))(param_2,local_4c);
      if (iVar4 != 0) {
        puVar6 = &local_3c;
        puVar8 = &local_40;
        uVar5 = FUN_015422f0(*(undefined8 *)(param_1 + 0x30),param_2,local_4c + 1,&local_30,puVar6,
                             puVar8);
        uVar9 = (undefined4)((ulonglong)puVar8 >> 0x20);
        uVar7 = (undefined4)((ulonglong)puVar6 >> 0x20);
        cVar1 = FUN_0153fa60(*(undefined8 *)(param_1 + 0x10),iVar4,&local_38);
        if (cVar1 == '\0') {
          FUN_0153f9c0(*(undefined8 *)(param_1 + 0x10),iVar4,uVar5,local_30,CONCAT44(uVar7,iVar2),
                       CONCAT44(uVar9,local_3c),local_40);
        }
        else {
          iVar2 = *(int *)(local_38 + 0x20);
          if (iVar2 == 1) {
            *(undefined4 *)(local_38 + 0x20) = 2;
            *(undefined4 *)(local_38 + 0x10) = uVar5;
          }
        }
      }
      local_4c = local_4c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(&local_30);
  return;
}

