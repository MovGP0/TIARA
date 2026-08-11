/* Ghidra address: 01171a20 */
/* Ghidra symbol: FUN_01171a20 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01171a20(void)

{
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  _DAT_0203a4e0 = 0x10;
  _DAT_0203a4e4 = 0x88;
  _DAT_0203a4e8 = 0x10;
  _DAT_0203a4ec = 200;
  if (*(char *)(*(longlong *)PTR_DAT_02003280 + 0xa9) == '\0') {
    FUN_008059a0(*(undefined8 *)PTR_DAT_02003280);
  }
  else {
    FUN_01160b40(*(undefined8 *)PTR_DAT_02003280);
  }
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02003280 + 0x6b0) + 0xe0))
            (*(longlong **)(*(longlong *)PTR_DAT_02003280 + 0x6b0),&local_28);
  FUN_005fdab0(*(undefined8 *)(DAT_0203d9b0 + 0x80),0xff0000);
  FUN_011670f0(DAT_0203d9b0,local_28,local_24,local_20,CONCAT44(uVar1,local_1c));
  FUN_008059a0(DAT_0203d9a8);
  (**(code **)(*DAT_0203d9a8 + 0x180))(DAT_0203d9a8);
  (**(code **)(*DAT_0203d9a8 + 0x198))(DAT_0203d9a8);
  *(undefined4 *)(PTR_DAT_02001ad0 + 0x50) = 0x18;
  *(undefined4 *)(PTR_DAT_02001ad0 + 0x54) = 0x28;
  *(undefined4 *)PTR_DAT_02005b20 = 0;
  FUN_01160b70(PTR_DAT_020019a0,PTR_DAT_02005030,*(undefined8 *)PTR_DAT_02004ff0,
               *(undefined8 *)PTR_DAT_02005aa0,*(undefined8 *)PTR_DAT_02002798,
               *(undefined8 *)PTR_DAT_02001510);
  return;
}

