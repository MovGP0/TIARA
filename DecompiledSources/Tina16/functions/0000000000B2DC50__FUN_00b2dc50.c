/* Ghidra address: 00b2dc50 */
/* Ghidra symbol: FUN_00b2dc50 */


void FUN_00b2dc50(longlong param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = 0;
  while( true ) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x20);
    if (*(int *)(lVar6 + 0x10) + -1 <= iVar7) break;
    pcVar3 = (char *)FUN_004aeac0(lVar6,iVar7);
    pcVar4 = (char *)FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x20),iVar7 + 1);
    if (((*pcVar3 == '\x02') && (*(int *)(pcVar3 + 1) == 9)) && (*pcVar4 == '\0')) {
      iVar1 = FUN_00415a60(*(undefined8 *)(pcVar4 + 5),&DAT_00b2dde4);
      if (iVar1 == 0) {
        puVar5 = (undefined1 *)FUN_00418560(0x2f,&DAT_00b2c7a8);
        FUN_00414bf0(puVar5 + 5,"<UDF>");
        *puVar5 = 1;
        puVar5 = (undefined1 *)FUN_00418560(0x2f,&DAT_00b2c7a8);
        FUN_004153d0(puVar5 + 5,*PTR_DAT_020012a0,0);
        *puVar5 = 3;
        FUN_004aedb0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x20),iVar7,pcVar4);
        FUN_004aedb0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x20),iVar7 + 1,pcVar3);
        FUN_004aec30(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x20),iVar7);
        iVar1 = iVar7 + 3;
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x20);
        if (iVar1 < *(int *)(lVar6 + 0x10)) {
          lVar6 = FUN_004aeac0(lVar6,iVar1);
          iVar2 = FUN_00415a60(*(undefined8 *)(lVar6 + 5),&LAB_00b2de08);
          if (iVar2 != 0) {
            FUN_004aec30(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x20),iVar1);
          }
        }
      }
    }
    iVar7 = iVar7 + 1;
  }
  return;
}

