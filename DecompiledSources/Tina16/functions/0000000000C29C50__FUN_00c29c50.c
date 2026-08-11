/* Ghidra address: 00c29c50 */
/* Ghidra symbol: FUN_00c29c50 */


void FUN_00c29c50(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xb0) + 8);
  FUN_004238d0(param_2 + 0x58,0,0,0,0);
  FUN_0041ddd0(param_2 + 0x48,PTR_PTR_02002088);
  pcVar3 = (code *)FUN_00411550(lVar1,0xfffd);
  (*pcVar3)(lVar1,*(undefined8 *)(param_2 + 0xb0),2,*(undefined1 *)(param_2 + 0x84),
            *(undefined1 *)(lVar1 + 0x3a),param_2 + 0x58,*(undefined8 *)(param_2 + 0x48));
  plVar2 = *(longlong **)(*(longlong *)(param_2 + 0xb0) + 8);
  if (*(char *)((longlong)plVar2 + 0x3a) != '\0') {
    (**(code **)(*plVar2 + 0x20))(plVar2,*(undefined8 *)(param_2 + 0xb0));
  }
  return;
}

