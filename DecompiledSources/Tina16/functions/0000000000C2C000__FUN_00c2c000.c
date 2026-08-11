/* Ghidra address: 00c2c000 */
/* Ghidra symbol: FUN_00c2c000 */


void FUN_00c2c000(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x140) + 8);
  FUN_004238d0(param_2 + 0x58,0,0,0,0);
  FUN_0041ddd0(param_2 + 0x48,PTR_PTR_02003090);
  pcVar2 = (code *)FUN_00411550(lVar1,0xfffd);
  (*pcVar2)(lVar1,*(undefined8 *)(param_2 + 0x140),2,*(undefined1 *)(param_2 + 0xfc),
            *(undefined1 *)(lVar1 + 0x3a),param_2 + 0x58,*(undefined8 *)(param_2 + 0x48));
  return;
}

