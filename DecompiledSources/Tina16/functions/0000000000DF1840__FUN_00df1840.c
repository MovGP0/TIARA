/* Ghidra address: 00df1840 */
/* Ghidra symbol: FUN_00df1840 */


/* WARNING: Removing unreachable block (ram,0x00df1865) */
/* WARNING: Removing unreachable block (ram,0x00df1869) */

void FUN_00df1840(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  undefined1 uVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double *local_40 [5];
  
  uVar1 = (undefined1)((ushort)param_3 >> 8);
  dVar2 = (double)FUN_016eb0a0(param_1,1);
  uVar3 = FUN_016eb0a0(param_1,2);
  dVar4 = (double)FUN_00b90620(0x3eb0c6f7a0b5ed8d,uVar3);
  FUN_016e9e20(param_1,3);
  FUN_016e9f40(param_1,FUN_00df1480);
  FUN_016ebe60(param_1,1,CONCAT11(uVar1,1),0,0);
  FUN_016ebe60(param_1,2,2,0,0);
  FUN_016ebe60(param_1,3,3,0,0);
  FUN_016ee260(param_1,local_40,0x88,0);
  *local_40[0] = (dVar2 * dVar2) / dVar4;
  local_40[0][6] = dVar2;
  *(undefined1 *)(local_40[0] + 0xc) = 0;
  *PTR_DAT_02003fd8 = 1;
  return;
}

