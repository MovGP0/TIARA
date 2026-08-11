/* Ghidra address: 01773fd0 */
/* Ghidra symbol: FUN_01773fd0 */


void FUN_01773fd0(longlong param_1,uint *param_2,uint param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined8 local_78;
  undefined8 local_70 [2];
  uint local_60 [8];
  undefined8 local_40;
  undefined1 local_34 [4];
  int local_30;
  int local_2c;
  
  local_78 = 0;
  local_70[0] = 0;
  local_40 = 0;
  FUN_0040d200(local_60,0x20,0);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  FUN_004b6dc0(uVar1,0x80);
  FUN_004b84c0(uVar1,&local_30,4);
  FUN_004b84c0(uVar1,local_34,4);
  iVar2 = FUN_004b6da0(uVar1);
  if (2 < local_30) {
    iVar4 = 8;
    puVar3 = local_60;
    do {
      FUN_004b84c0(uVar1,puVar3,4);
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = FUN_004b6da0(uVar1);
  *param_2 = local_60[0];
  if ((param_3 & 2) != 0) {
    FUN_004b6dc0(uVar1,(longlong)iVar2);
    *param_2 = *param_2 & 0xfffffffe;
    FUN_004b89e0(uVar1,param_2,4);
    FUN_004b6dc0(uVar1,(longlong)iVar4);
  }
  if (((2 < local_30) && ((*param_2 & 2) != 0)) &&
     (FUN_004b84c0(uVar1,&local_2c,4), -1 < local_2c + -1)) {
    do {
      FUN_01b20f00(local_70,uVar1);
      FUN_004168b0(&local_40,local_70[0]);
      FUN_01b20f00(&local_78,uVar1);
      FUN_004168b0(&local_40,local_78);
      FUN_01b23340(uVar1,0,0);
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  if ((param_3 & 1) != 0) {
    FUN_004b6dc0(uVar1,0);
  }
  FUN_004145c0(&local_78,2);
  FUN_00414480(&local_40);
  return;
}

