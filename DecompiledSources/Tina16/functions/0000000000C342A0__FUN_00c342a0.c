/* Ghidra address: 00c342a0 */
/* Ghidra symbol: FUN_00c342a0 */


void FUN_00c342a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  
  lVar1 = FUN_004097b0();
  if (lVar1 == 0) {
    *(undefined4 *)(param_2 + 0xfc) = 100;
  }
  else {
    *(undefined4 *)(param_2 + 0xfc) = 0;
  }
  uVar3 = 0;
  FUN_004238d0(param_2 + 0x88,0,0,0,0);
  FUN_0041ddd0(param_2 + 0x40,PTR_LAB_020054c8);
  pcVar2 = (code *)FUN_00411550(*(undefined8 *)(param_2 + 0x130),0xfffd);
  (*pcVar2)(*(undefined8 *)(param_2 + 0x130),*(undefined8 *)(param_2 + 0x130),2,
            *(undefined1 *)(param_2 + 0xfc),uVar3 & 0xffffff00,param_2 + 0x88,
            *(undefined8 *)(param_2 + 0x40));
  return;
}

