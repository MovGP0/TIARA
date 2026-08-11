/* Ghidra address: 016c2450 */
/* Ghidra symbol: FUN_016c2450 */


void FUN_016c2450(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_420 [256];
  undefined8 local_320;
  undefined2 local_318 [4];
  undefined1 local_310 [256];
  undefined4 local_210 [130];
  
  local_320 = 0;
  local_210[0] = 0x564e4903;
  uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x10);
  FUN_016c2000(*(undefined8 *)(param_1 + 0xa0),local_210,
               *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 8),
               *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x60),uVar2,1,param_1 + 0x6c);
  if (*(char *)(*(longlong *)(param_1 + 0xa0) + 0x9a9) == '\0') {
    lVar1 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x50),0);
    uVar2 = uVar2 & 0xffffffffffffff00;
    FUN_016bd780(*(undefined8 *)(param_1 + 0xa0),local_310,0,*(undefined8 *)(param_1 + 0xb0),uVar2,0
                 ,0,*(undefined8 *)(lVar1 + 8),
                 *(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x9a9));
    lVar1 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x50),1);
    uVar2 = uVar2 & 0xffffffffffffff00;
    FUN_016bd780(*(undefined8 *)(param_1 + 0xa0),local_310,0,*(undefined8 *)(param_1 + 0xb0),uVar2,0
                 ,0,*(undefined8 *)(lVar1 + 8),
                 *(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x9a9));
    local_318[0] = 0x3001;
    uVar2 = uVar2 & 0xffffffffffffff00;
    FUN_016bd780(*(undefined8 *)(param_1 + 0xa0),local_310,0,*(undefined8 *)(param_1 + 0xb0),uVar2,0
                 ,0,local_318,*(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x9a9));
    FUN_004154b0(&local_320,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 8),0);
    FUN_004155b0(&local_320,"_PSG1");
    FUN_00415560(local_420,local_320,0xff);
    FUN_016bd780(*(undefined8 *)(param_1 + 0xa0),local_310,0,*(undefined8 *)(param_1 + 0xb0),
                 uVar2 & 0xffffffffffffff00,0,0,local_420,
                 *(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x9a9));
  }
  FUN_004144d0(&local_320);
  return;
}

