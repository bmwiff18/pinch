# pinch
Recipe Finder

Input:
Cuisine
Dietary restrictions
Difficulty
Appliances needed
Optional: ingredients you have
Optional: budget to stick to

Features:
Suggestions for recipes
Total price (compared with takeout!)
Time
Difficulty level
Required ingredients & materials
Calorie count
Calendar/Log of recipes
Profile
What recipes have you tried, what rating would you give them, mastery level

Initial Research:
How do we gather data points for recipes, ingredients, etc.?
How can you search for recipes

Initial (Basic) Approach:
Start DB (postgres) of a few recipes you’ve made before
Select one at random and display stored data

Tables

Cookbook
Chef’s name, list of recipes
Ex. Bridget, [meatloaf, shrimp scampi]

Recipe
Recipe name, list of ingredients, cuisine, total price, total calories, time taken, difficulty level, list of materials
Ex. ‘meatloaf’, [‘turkey’, ‘carrots’, ‘breadcrumbs’], ‘american’, 14.10, 
Ingredient
Name, quantity, type (produce, meat, fish, etc.), base unit

Material
Material name, type

