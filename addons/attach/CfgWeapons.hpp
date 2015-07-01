
class CfgWeapons {
    class ACE_ItemCore;
    class InventoryItem_Base_F;

    class ACE_IR_Strobe_Item: ACE_ItemCore {
        ACE_attachable = "ACE_IR_Strobe_Effect";
        author = ECSTRING(common,ACETeam);
        scope = 2;
        displayName = CSTRING(IrStrobe_Name);
        descriptionShort = CSTRING(IrStrobe_Description);
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        picture = PATHTOF(UI\irstrobe_item.paa);

        class ItemInfo: InventoryItem_Base_F {
            mass = 1;
        };
    };
};
