/* Ghidra address: 01d84d10 */
/* Ghidra symbol: FUN_01d84d10 */


void FUN_01d84d10(undefined8 param_1,char param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *local_38;
  longlong *local_30 [2];
  longlong local_20;
  
  local_38 = (longlong *)0x0;
  local_30[0] = (longlong *)0x0;
  lVar2 = FUN_00427be0(L"OLEAUT32.DLL");
  if (lVar2 != 0) {
    pcVar3 = (code *)0x0;
    if (param_2 != '\0') {
      pcVar3 = (code *)FUN_00427c10(lVar2,L"UnRegisterTypeLibForUser");
    }
    if (pcVar3 == (code *)0x0) {
      pcVar3 = (code *)FUN_00427c10(lVar2,L"UnRegisterTypeLib");
    }
    if (pcVar3 != (code *)0x0) {
      (**(code **)(*DAT_03567c88 + 0x38))(DAT_03567c88,local_30);
      uVar1 = (**(code **)(*local_30[0] + 0x38))(local_30[0],&local_20);
      FUN_006245b0(uVar1);
      (*pcVar3)(local_20,*(undefined2 *)(local_20 + 0x18),*(undefined2 *)(local_20 + 0x1a),
                *(undefined4 *)(local_20 + 0x10),*(undefined4 *)(local_20 + 0x14));
      (**(code **)(*DAT_03567c88 + 0x38))(DAT_03567c88,&local_38);
      (**(code **)(*local_38 + 0x60))(local_38,local_20);
    }
  }
  FUN_00417840(&local_38,&DAT_004708d8,2);
  return;
}

