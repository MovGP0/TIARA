/* Ghidra address: 00883390 */
/* Ghidra symbol: FUN_00883390 */


undefined8 FUN_00883390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined1 local_24 [4];
  undefined8 local_20 [2];
  
  local_30 = 0;
  iVar1 = (*(code *)PTR_FUN_01e218d0)(param_1,0xc8000006,param_3,0x10,local_20,8,local_24,0,0);
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_FUN_01e21780)();
    FUN_0041ddd0(&local_30,PTR_PTR_020048b0);
    local_38 = 0x11;
    local_40 = param_2;
    uVar3 = FUN_00883110(&PTR_FUN_00882c78,1,uVar2,local_30,&local_40,0);
    FUN_004134c0(uVar3);
  }
  FUN_00414480(&local_30);
  return local_20[0];
}

