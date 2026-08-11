/* Ghidra address: 01613f60 */
/* Ghidra symbol: FUN_01613f60 */


void FUN_01613f60(longlong *param_1,undefined8 param_2)

{
  undefined *puVar1;
  short sVar2;
  undefined8 uVar3;
  undefined1 local_30 [8];
  
  sVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (sVar2 == 0x20) {
    (**(code **)(*param_1 + 0x2d0))(param_1,0,local_30);
    puVar1 = PTR_DAT_02005458;
    uVar3 = FUN_01cfd6a0(param_1);
    FUN_01613b60(param_1,4,uVar3,0,param_2,puVar1);
  }
  return;
}

