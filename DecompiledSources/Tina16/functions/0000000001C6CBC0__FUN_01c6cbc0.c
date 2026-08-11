/* Ghidra address: 01c6cbc0 */
/* Ghidra symbol: FUN_01c6cbc0 */


void FUN_01c6cbc0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_00411a80(param_1,param_2);
  FUN_01d42ec0(L"TSchematicEditor.Destroy.0");
  FUN_01c85f70(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x24b8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1b68));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1b70));
  if ((*(longlong *)(param_1 + 0x2500) != 0) &&
     (iVar2 = *(int *)(*(longlong *)(param_1 + 0x2500) + 0x10) + -1, -1 < iVar2)) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2500),iVar2);
      FUN_01ca0d40(param_1,uVar1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x2500));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18f0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1908));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18f8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1900));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1910));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1918));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x27a0));
  *(undefined8 *)(param_1 + 0x27a0) = 0;
  FUN_01d42ec0(L"TSchematicEditor.Destroy.1");
  if (*(longlong *)(param_1 + 7000) != 0) {
    FUN_01c6cf20(param_1);
  }
  FUN_01c8edd0(param_1,0);
  DAT_035667b8 = 0;
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1b78));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x2778));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x2780));
  FUN_01d42ec0(L"TSchematicEditor.Destroy.2");
  FUN_01aebbe0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

