/* Ghidra address: 01c26980 */
/* Ghidra symbol: FUN_01c26980 */


void FUN_01c26980(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_a8;
  int local_70;
  int local_6c;
  undefined8 local_68;
  char local_54;
  short local_53;
  short local_51;
  undefined1 local_3a;
  undefined1 local_2c [4];
  
  FUN_00417580(&local_70,&DAT_01c21008);
  *(undefined8 *)(param_1 + 0x588) = param_2;
  FUN_01c23250();
  if (*(longlong *)(param_1 + 0x588) != 0) {
    iVar1 = FUN_00c41060(*(longlong *)(param_1 + 0x588),local_2c);
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        FUN_00c411c0(*(undefined8 *)(param_1 + 0x588),&local_a8,iVar3);
        puVar4 = &local_a8;
        puVar5 = &local_68;
        for (lVar2 = 5; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        *(undefined4 *)puVar5 = *(undefined4 *)puVar4;
        *(undefined2 *)((longlong)puVar5 + 4) = *(undefined2 *)((longlong)puVar4 + 4);
        local_70 = (int)local_53;
        local_6c = (int)local_51;
        if (local_54 == '\0') {
          local_3a = 3;
        }
        else if (local_54 == '\x01') {
          local_3a = 0;
        }
        else if (local_54 == '\x02') {
          local_3a = 1;
        }
        else if (local_54 == '\x03') {
          local_3a = 2;
        }
        FUN_01c231a0(param_1,&local_70);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_01c26f70(param_1);
  FUN_00417740(&local_70,&DAT_01c21008);
  return;
}

