/* Ghidra address: 00d3f510 */
/* Ghidra symbol: FUN_00d3f510 */


undefined8 * FUN_00d3f510(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong in_stack_ffffffffffffff78;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined1 local_78 [20];
  undefined1 local_64 [16];
  undefined1 local_54 [16];
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined1 local_34 [12];
  
  FUN_004238d0(param_2,0,0,0,in_stack_ffffffffffffff78 & 0xffffffff00000000);
  cVar1 = FUN_00d3f270(param_1);
  uVar6 = FUN_00d3efa0(param_1);
  if (((((uVar6 & 1) != 0) && (cVar1 != '\x03')) && (cVar1 != '\x04')) && (cVar1 != '\x05')) {
    plVar7 = (longlong *)FUN_00781840();
    (**(code **)(*plVar7 + 0x228))(plVar7,local_34,0x20);
    uVar8 = FUN_00781840();
    FUN_00d3e550(param_1,local_78);
    puVar9 = &local_44;
    cVar1 = FUN_007790e0(uVar8,0,local_34,local_78,puVar9);
    uVar10 = (undefined4)((ulonglong)puVar9 >> 0x20);
    if (cVar1 == '\0') {
      uVar6 = (ulonglong)puVar9 & 0xffffffff00000000;
      FUN_004238d0(&local_44,0,0,0,uVar6);
      uVar10 = (undefined4)(uVar6 >> 0x20);
    }
    uVar2 = (**(code **)(*param_1 + 0x50))(param_1,0x31);
    uVar3 = (**(code **)(*param_1 + 0x50))(param_1,0x32);
    FUN_004238d0(local_54,0,0,uVar2,CONCAT44(uVar10,uVar3));
    FUN_00d37120(local_78,local_54,&local_44);
    *param_2 = local_44;
    param_2[1] = uStack_3c;
    if (0 < *(int *)((longlong)param_1 + 0x114)) {
      iVar4 = FUN_004230c0(param_2);
      if (0 < iVar4) {
        FUN_00d3e550(param_1,local_64);
        iVar4 = FUN_004230c0(local_64);
        iVar5 = FUN_004230c0(param_2);
        FUN_00429ca0(param_2,0,(iVar4 - iVar5) / 2 - *(int *)((longlong)param_2 + 4));
      }
    }
  }
  return param_2;
}

