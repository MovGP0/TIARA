/* Ghidra address: 00d289e0 */
/* Ghidra symbol: FUN_00d289e0 */


void FUN_00d289e0(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int local_res18 [4];
  int local_2c;
  
  local_res18[0] = param_3;
  FUN_00d21150(param_1,local_res18);
  puVar1 = (undefined8 *)param_1[0xd];
  FUN_00409a70(param_2,puVar1,(longlong)local_res18[0]);
  local_2c = 1;
  do {
    lVar7 = (longlong)(local_2c + -1);
    uVar2 = FUN_00cd7280(*(undefined4 *)((longlong)puVar1 + lVar7 * 0x10 + 0xc),8);
    lVar5 = (longlong)local_2c;
    *(uint *)(puVar1 + lVar5 * 2) =
         *(uint *)(puVar1 + lVar7 * 2) ^ uVar2 ^ 1 << ((byte)(local_2c + -1) & 0x1f);
    *(undefined4 *)(puVar1 + (longlong)(8 - local_2c) * 2 + 0x12) =
         *(undefined4 *)(puVar1 + lVar5 * 2);
    *(uint *)((longlong)puVar1 + lVar5 * 0x10 + 4) =
         *(uint *)((longlong)puVar1 + lVar7 * 0x10 + 4) ^ *(uint *)(puVar1 + lVar5 * 2);
    *(undefined4 *)((longlong)puVar1 + (longlong)(8 - local_2c) * 0x10 + 0x94) =
         *(undefined4 *)((longlong)puVar1 + lVar5 * 0x10 + 4);
    *(uint *)(puVar1 + (longlong)local_2c * 2 + 1) =
         *(uint *)(puVar1 + lVar7 * 2 + 1) ^
         *(uint *)((longlong)puVar1 + (longlong)local_2c * 0x10 + 4);
    *(undefined4 *)(puVar1 + (longlong)(8 - local_2c) * 2 + 0x13) =
         *(undefined4 *)(puVar1 + (longlong)local_2c * 2 + 1);
    *(uint *)((longlong)puVar1 + (longlong)local_2c * 0x10 + 0xc) =
         *(uint *)((longlong)puVar1 + (longlong)(local_2c + -1) * 0x10 + 0xc) ^
         *(uint *)(puVar1 + (longlong)local_2c * 2 + 1);
    *(undefined4 *)((longlong)puVar1 + (longlong)(8 - local_2c) * 0x10 + 0x9c) =
         *(undefined4 *)((longlong)puVar1 + (longlong)local_2c * 0x10 + 0xc);
    iVar6 = 0;
    do {
      lVar5 = (longlong)(local_2c + -1);
      lVar7 = (longlong)iVar6;
      uVar2 = FUN_00cd7270(*(undefined4 *)
                            (&DAT_01ec8450 +
                            (ulonglong)
                            (*(uint *)((longlong)puVar1 + lVar7 * 4 + lVar5 * 0x10) >> 8 & 0xff) * 4
                            ),8);
      uVar3 = FUN_00cd7270(*(undefined4 *)
                            (&DAT_01ec8450 +
                            (ulonglong)
                            (*(uint *)((longlong)puVar1 + lVar7 * 4 + lVar5 * 0x10) >> 0x10 & 0xff)
                            * 4),0x10);
      uVar4 = FUN_00cd7270(*(undefined4 *)
                            (&DAT_01ec8450 +
                            (ulonglong)
                            (*(uint *)((longlong)puVar1 + lVar7 * 4 + lVar5 * 0x10) >> 0x18) * 4),
                           0x18);
      *(uint *)((longlong)puVar1 + lVar7 * 4 + lVar5 * 0x10) =
           *(uint *)(&DAT_01ec8450 +
                    (ulonglong)(*(uint *)((longlong)puVar1 + lVar7 * 4 + lVar5 * 0x10) & 0xff) * 4)
           ^ uVar2 ^ uVar3 ^ uVar4;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 4);
    local_2c = local_2c + 1;
  } while (local_2c != 9);
  puVar1[0x22] = *puVar1;
  puVar1[0x23] = puVar1[1];
  (**(code **)(*param_1 + 0x40))(param_1,param_4);
  return;
}

