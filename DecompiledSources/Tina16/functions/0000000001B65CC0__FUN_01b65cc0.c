/* Ghidra address: 01b65cc0 */
/* Ghidra symbol: FUN_01b65cc0 */


void FUN_01b65cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44 [4];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [16];
  
  FUN_01b63550(param_1,0);
  lVar1 = FUN_010e1b10(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_010e1b10(param_1);
    puVar3 = &local_47;
    FUN_01138dc0(uVar2,local_30,local_38,local_40,local_44,&local_45,&local_46,puVar3);
    uVar2 = FUN_010e1b10(param_1);
    FUN_01138e40(uVar2,local_30,local_38,local_40,local_44,1,1,
                 (ulonglong)puVar3 & 0xffffffffffffff00);
    uVar2 = FUN_010e1b10(param_1);
    FUN_00805200(uVar2);
  }
  FUN_010e2bf0(param_1,param_2,param_3);
  return;
}

