/* Ghidra address: 01bca330 */
/* Ghidra symbol: FUN_01bca330 */


undefined8 FUN_01bca330(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_70;
  undefined1 local_68 [68];
  undefined4 local_24;
  undefined1 local_20 [24];
  
  FUN_00417580(local_68,&DAT_00470720);
  FUN_0040d200(local_20,0x18,0);
  local_70 = FUN_00415f70(param_3);
  uVar3 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x28))
                    (*(longlong **)(param_1 + 0x108),PTR_DAT_02003140,&local_70,1,0x800,&local_24);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x30))
                      (*(longlong **)(param_1 + 0x108),local_24,PTR_DAT_02003140,0x800,
                       CONCAT22(uVar3,2),local_20,param_2,local_68,0);
    if (iVar1 != 0) {
      FUN_00625ac0(iVar1,local_68);
    }
  }
  else if (iVar1 == -0x7ffdfffa) {
    local_80 = 0xf;
    local_88 = param_3;
    uVar2 = FUN_0044d530(&PTR_FUN_00620870,1,L"Property \"%s\" is not supported.",&local_88,0);
    FUN_004134c0(uVar2);
  }
  else {
    FUN_006245b0(iVar1);
  }
  FUN_00417740(local_68,&DAT_00470720);
  return param_2;
}

