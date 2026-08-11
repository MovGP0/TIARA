/* Ghidra address: 015e1780 */
/* Ghidra symbol: FUN_015e1780 */


void FUN_015e1780(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_25f [61];
  undefined4 local_222;
  
  FUN_00417580(local_25f,&DAT_015b8318);
  FUN_015ca1c0(param_1);
  FUN_015ca200(param_1);
  if (*(char *)(*(longlong *)(param_1 + 0xc0) + 9) == '\0') {
    iVar2 = FUN_004170c0(&DAT_015e191c,param_2,1);
    if (iVar2 < 1) {
      iVar2 = FUN_004170c0(&DAT_015e192c,param_2,1);
      if (((iVar2 < 1) && (param_4 == 0)) && (param_3 == 0x28bf)) {
        cVar1 = FUN_015de7f0(param_1,param_2,local_25f,0x28bf,0);
        if (cVar1 != '\0') {
          lVar3 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_222);
          *(undefined1 *)(lVar3 + 0x82) = 1;
          FUN_015d5840(param_1,4,local_222);
        }
        goto code_r0x015e18d3;
      }
    }
  }
  FUN_015d5720(param_1,param_2,param_3,param_4);
  FUN_015d5840(param_1,4,0xffffffff);
code_r0x015e18d3:
  FUN_00417740(local_25f,&DAT_015b8318);
  return;
}

