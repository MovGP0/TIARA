/* Ghidra address: 00ce1e60 */
/* Ghidra symbol: FUN_00ce1e60 */


void FUN_00ce1e60(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined *local_30;
  wchar_t *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  if (param_2 == 0) {
    FUN_00414480(param_1 + 0x70);
    FUN_00414480(param_1 + 0x20);
    goto LAB_00ce1fb1;
  }
  FUN_008b03d0(&local_20,param_2,L"charset",&local_18,3);
  FUN_00414ad0(param_1 + 0x70,local_20);
  lVar3 = FUN_00ce2110(param_1);
  if ((lVar3 != 0) && ((*(ushort *)(lVar3 + 0x34) & 2) != 0)) goto LAB_00ce1fb1;
  if (local_18 == 0) {
    cVar1 = FUN_008b0130(*(undefined8 *)(param_1 + 0x70),L"text");
    if (cVar1 != '\0') {
      FUN_008b0240(&local_10,*(undefined8 *)(param_1 + 0x70));
      local_30 = &DAT_00ce202c;
      local_28 = L"xml-external-parsed-entity";
      iVar2 = FUN_00874bb0(local_10,&local_30,1,0);
      if (iVar2 < 0) {
        cVar1 = FUN_00879100(local_10,L"+xml");
        if (cVar1 == '\0') {
          FUN_00414b50(&local_18,L"ISO-8859-1");
          goto LAB_00ce1f7c;
        }
      }
      FUN_00414b50(&local_18,L"us-ascii");
    }
  }
LAB_00ce1f7c:
  if (local_18 != 0) {
    FUN_00414ad0(param_1 + 0x20,local_18);
  }
LAB_00ce1fb1:
  FUN_00414560(&local_20,3);
  return;
}

