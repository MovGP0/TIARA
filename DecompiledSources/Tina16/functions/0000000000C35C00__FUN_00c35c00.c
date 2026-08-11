/* Ghidra address: 00c35c00 */
/* Ghidra symbol: FUN_00c35c00 */


void FUN_00c35c00(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  uint uVar2;
  
  uVar2 = 0;
  FUN_004238d0(param_2 + 0x68,0,0,0,0);
  FUN_0041ddd0(param_2 + 0x50,PTR_PTR_02002800);
  pcVar1 = (code *)FUN_00411550(*(undefined8 *)(param_2 + 0xe0),0xfffd);
  (*pcVar1)(*(undefined8 *)(param_2 + 0xe0),*(undefined8 *)(param_2 + 0xe0),2,
            *(undefined1 *)(param_2 + 0xac),uVar2 & 0xffffff00,param_2 + 0x68,
            *(undefined8 *)(param_2 + 0x50));
  return;
}

