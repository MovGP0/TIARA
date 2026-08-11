/* Ghidra address: 00c34a70 */
/* Ghidra symbol: FUN_00c34a70 */


void FUN_00c34a70(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  FUN_004238d0(param_2 + 0x58,0,0,0,0);
  FUN_0041ddd0(param_2 + 0x48,PTR_PTR_02002b90);
  pcVar1 = (code *)FUN_00411550(*(undefined8 *)(param_2 + 0xa0),0xfffd);
  (*pcVar1)(*(undefined8 *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0xa0),2,
            *(undefined1 *)(param_2 + 0x70),1,param_2 + 0x58,*(undefined8 *)(param_2 + 0x48));
  return;
}

